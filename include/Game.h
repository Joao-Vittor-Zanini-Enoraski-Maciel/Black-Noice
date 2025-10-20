using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private GameObject playerPrefab;
    
    void Start()
    {
        InitializeGame();
    }

    void Update()
    {
        // Lógica principal do jogo pode ser adicionada aqui
    }

    private void InitializeGame()
    {
        if (GameObject.FindObjectOfType<Player>() == null)
        {
            Instantiate(playerPrefab);
        }
    }

    public void Run()
    {
        // Método equivalente ao game.run() do código original
        Debug.Log("Jogo executando...");
    }
}