#pragma once
#include "Render.h"
#include "Transform.h"
#include "Model.h"


class MeshRender :
	public Render
{
public:
	template <class T>
	using ComPtr = Microsoft::WRL::ComPtr<T>;
public:
	MeshRender();
	virtual void Init(CRef<Transform> object);
	virtual ~MeshRender();
	void Update(ComPtr<ID3D11DeviceContext> deviceContext, BasicEffect & effect);
	void BindTransform(CRef<Transform> object);
	void UnbindTransform();
	void SetModel(Model&& model);
	void SetModel(const Model& model);
protected:
	Ref<Transform> mTransform;									// 变换
	Model mModel;												// 模型
	ComPtr<ID3D11Buffer> mInstancedBuffer;						// 实例缓冲区
	size_t mCapacity;											// 缓冲区容量
};