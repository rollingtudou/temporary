package main

import (
  "fmt"
  "log"
  "os"

  "github.com/anjude/bean-sdk-go/beansdk"
  "github.com/anjude/bean-sdk-go/services/csdn_service"
  "github.com/anjude/bean-sdk-go/services/csdn_service/schema"
)

func main() {
  // 从环境变量中加载用户名和用户令牌
  userName := os.Getenv("SDFsoul")
  userToken := os.Getenv("e2b6fd25c5824bf6bf5606b3327ec8a2")

  if userName == "" || userToken == "" {
    log.Fatal("Missing CSDN_USERNAME or CSDN_USER_TOKEN environment variables")
  }

  // 初始化客户端
  client := beansdk.NewClient("visitor", "")
  csdnService := csdn_service.NewCsdnService(client, userName, userToken)

  // 获取热门文章列表
  hotListReq := schema.GetHotListReq{
    Page:     0,
    PageSize: 10,
    Type:     "",
  }
  got, err := csdnService.GetArticleList(hotListReq)
  if err != nil {
    log.Fatalf("GetArticleList() error = %v", err)
  }

  // 提交评论 (**注意** - 自动化评论可能违反 CSDN 的条款)
  for _, article := range got.Data {
    commentReq := schema.CommentReq{
      CommentId: "",
      Content:   "Great article, thanks for sharing!", // 调整评论内容
      ArticleId: article.ProductId,
    }
    _, err := csdnService.SubmitComment(commentReq)
    if err != nil {
      log.Printf("SubmitComment() error for article %s: %v", article.Title, err)
    }
  }

  fmt.Println("Successfully submitted comments to articles")
}
