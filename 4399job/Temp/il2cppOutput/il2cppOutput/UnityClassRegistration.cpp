struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 82 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//13. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//22. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//23. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//24. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//25. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//26. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//27. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//28. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//29. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//30. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//31. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//32. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//33. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//34. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//35. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//36. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//37. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//38. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//39. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//40. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//41. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//42. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//43. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//44. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//45. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//46. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//47. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//48. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//49. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//50. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//51. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//52. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//53. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//54. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//55. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//56. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//57. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//58. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//59. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//60. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//61. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//62. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//63. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//64. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//65. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//66. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//67. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//68. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//69. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//70. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//71. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//72. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//73. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//74. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//75. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//76. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//77. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//78. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

	//79. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//80. NavMeshData
	void RegisterClass_NavMeshData();
	RegisterClass_NavMeshData();

	//81. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
