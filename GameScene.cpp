#include "GameScene.h"

GameScene::GameScene() {
	// コンストラクタ（変数の初期化など）
}

GameScene::~GameScene() {
	// デストラクタ（解放処理など）
}

void GameScene::Initialize() {
	// 初期化処理（ゲーム開始時に一度だけ呼ばれる）
	// 例: テクスチャの読み込み
	// textureHandle_ = KamataEngine::TextureLoad("Resources/sample.png");
}

void GameScene::Update() {
	// 更新処理（毎フレーム呼ばれるキー入力や座標計算など）

	// 例: スペースキーを押したら…などの判定
	// if (KamataEngine::Input::IsTriggerKey(DIK_SPACE)) { }
}

void GameScene::Draw() {
	// 描画処理（スプライトや3Dモデルの描画）

	// 例: スプライトの描画
	// KamataEngine::SpriteDraw(textureHandle_, x, y);
}