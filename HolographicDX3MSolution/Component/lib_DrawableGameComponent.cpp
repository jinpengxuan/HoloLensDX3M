#include "Precompiled.h"
#include "lib_DrawableGameComponent.h"

namespace MatMeshMod
{
	namespace Library
	{
		RTTI_DEFINITIONS(DrawableGameComponent)

			DrawableGameComponent::DrawableGameComponent()
			: GameComponent(), mVisible(true), mCamera(nullptr)
		{
		}

		DrawableGameComponent::DrawableGameComponent(Game& game)
			: GameComponent(game), mVisible(true), mCamera(nullptr)
		{
		}

		DrawableGameComponent::DrawableGameComponent(Game& game, Camera& camera)
			: GameComponent(game), mVisible(true), mCamera(&camera)
		{
		}

		DrawableGameComponent::~DrawableGameComponent()
		{
		}

		bool DrawableGameComponent::Visible() const
		{
			return mVisible;
		}

		void DrawableGameComponent::SetVisible(bool visible)
		{
			mVisible = visible;
		}

		Camera* DrawableGameComponent::GetCamera()
		{
			return mCamera;
		}

		void DrawableGameComponent::SetCamera(Camera* camera)
		{
			mCamera = camera;
		}

		void DrawableGameComponent::Draw(const GameTime& gameTime)
		{
		}
	}
}