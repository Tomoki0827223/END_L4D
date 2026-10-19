#pragma once
#include "KamataEngine.h"

class GameScene {
public:
	GameScene();
	~GameScene();

	// 初期化、更新、描画
	void Initialize();
	void Update();
	void Draw();

private:
	// 必要な変数やテクスチャハンドルをここに書きます
	// int textureHandle_ = 0;
};