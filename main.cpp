#include "GameScene.h"
#include "KamataEngine.h"
#include <Windows.h>

using namespace KamataEngine;

// シーンの列挙型
enum class Scene { Title, Game };

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {

	// 1. エンジンの初期化
	KamataEngine::Initialize(L"LE3C_26_ムラタ_トモキ");

	// 2. DirectX共通クラスの取得
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	GameScene* gameScnce = new GameScene();
	gameScnce->Initialize();

	// 初期シーンの設定
	Scene scene = Scene::Title;

	// メインループ
	while (true) {
		// ウィンドウのメッセージ処理（閉じるボタンなどが押されたら終了）
		if (KamataEngine::Update()) {
			break;
		}

		// 描画前処理
		dxCommon->PreDraw();


		if (scene == Scene::Game) {
			gameScnce->Update();
			gameScnce->Draw();
		}

		// 描画後処理
		dxCommon->PostDraw();
	}

	// 4. 解放処理
	delete gameScnce;
	gameScnce = nullptr;

	// 5. 終了処理
	KamataEngine::Finalize();

	return 0;
}