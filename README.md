# 共同開発環境を構築しよう！
## 概要
- 共同開発環境を構築しようという講座の資料

## 講義の目的
- 自分でプログラミングを学べるようになる
- 学びたいプログラミング言語の環境を構築することができるようになる
- 複数人で共同開発を行う環境を構築できるようになる

## 講義の内容
- テキストエディタの導入方法
- 言語プロセッサの導入方法
- バージョン管理システム(Git)の導入方法
- GitHubの導入方法、使い方

## 講義の対象者
- 1つ以上のプログラミング言語を学んだことがある人
- プログラミング言語に触れたことがある人

## 講義の資料
- [事前課題スライド](./LectureMaterials_Pre-challenge.pdf)
- [講義スライド](./LectureMaterials.pdf)
- [ハンズオン用GitHub](https://github.com/sotarokashiuchi/JDEL-HunsOn-Golang)

## 講義の時間配分
|所要時間|モデル時間配分|内容|
|---|---|---|
|60分間|                |事前課題|
|10分間|09:00 ~ 09:10   |導入|
|30分間|09:10 ~ 09:40   |シェル講座|
|40分間|09:40 ~ 10:20   |エディタ講座|
|30分間|10:20 ~ 10:50   |言語プロセッサ講座|
|90分間|10:50 ~ 12:20   |バージョン管理講座|
|10分間|12:20 ~ 12:30   |統合開発環境(IDE) & 個人開発まとめ|
|210分間|13:30 ~ 17:00  |GitHub講座|
|10分間|17:00 ~ 17:10   |共同開発まとめ|
|10分間|17:10 ~ 17:20   |(サークル紹介 & 記念撮影)|

## アーカイブ
- [2023/09/16:リハーサル](https://github.com/sotarokashiuchi/JointDevelopmentEnviromentLesson-BasedCodeForGolang)

## 講義の準備方法
1. [ハンズオン用GitHub](https://github.com/sotarokashiuchi/JDEL-HunsOn-Golang)から新しいRepositoryを作成
1. RepositoryのSettingsを変更する(以下のチェック項目を有効にすることを推奨)
    1. [General]->[Features]->[Issues]
    1. [General]->[Features]->[Preserve this repository]
    1. [General]->[Features]->[Projects]
    1. [General]->[Pull Requests]->[Allow  merge commits]
    1. [General]->[Pull Requests]->[Allo auto-merge] (レビュアーが足りないときなどは許可してもよい)
    1. [General]->[Pull Requests]->[Automatically delete head branches]
    1. [Branches]->[Branch protection rule]->[Require a pul request before merging]
    1. [Branches]->[Branch protection rule]->[Require a pul request before merging]->[Rquire approvals]
    1. [Branches]->[Branch protection rule]->[Require a pul request before merging]->[Dismiss state pull request approvals when new commits are pushed]
    1. [Branches]->[Branch protection rule]->[Require status checks to pass before merging]
    1. [Branches]->[Branch protection rule]->[Do not allow bypassing the above settings] (管理者も受講生と同じ権限にしたい場合、有効にする)
1. [Collaborators]->[Add people]から受講生のGitHubアカウントを追加する

## アンケート
[こちら](https://forms.gle/ArHWYLq2scbswyLs5)からアンケートに答えてください。
