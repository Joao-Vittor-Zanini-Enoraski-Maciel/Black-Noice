using UnityEngine;

public class Main : MonoBehaviour
{
    private GameManager gameManager;
    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        if (gameManager == null)
        {
            GameObject gmObject = new GameObject("GameManager");
            gameManager = gmObject.AddComponent<GameManager>();
        }
        RunGame();
    }
    private void RunGame()
    {
        gameManager.Run();
    }
}