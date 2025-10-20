using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] private float speed = 5f;
    private Rigidbody2D rb;
    private SpriteRenderer spriteRenderer;
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        spriteRenderer.color = Color.cyan;
        transform.localScale = new Vector3(0.5f, 0.8f, 1f);
        transform.position = new Vector3(4f, 3f, 0f);
    }
    void Update()
    {
        HandleInput();
    }
    void FixedUpdate()
    {
        // Movimento físico é melhor no FixedUpdate
        UpdateMovement();
    }
    private void HandleInput()
    {
        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");
        Vector2 movement = new Vector2(horizontal, vertical);
        if (movement.magnitude > 0)
        {
            rb.velocity = movement.normalized * speed;
        }
        else
        {
            rb.velocity = Vector2.zero;
        }
    }
    private void UpdateMovement()
    {
        // Movimento adicional pode ser adicionado aqui se necessário
    }
}