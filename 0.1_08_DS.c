#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
struct Node {
    int data;
    struct Node* next;
};

// Stack structure
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

// Queue structure
struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
};

// Function prototypes
void demonstrateArray();
void demonstrateLinkedList();
struct Node* createNode(int data);
void printLinkedList(struct Node* node);
void demonstrateStack();
struct Stack* createStack(unsigned capacity);
int isStackFull(struct Stack* stack);
int isStackEmpty(struct Stack* stack);
void push(struct Stack* stack, int item);
int pop(struct Stack* stack);
void demonstrateQueue();
struct Queue* createQueue(unsigned capacity);
int isQueueFull(struct Queue* queue);
int isQueueEmpty(struct Queue* queue);
void enqueue(struct Queue* queue, int item);
int dequeue(struct Queue* queue);

int main() {
    demonstrateArray();
    demonstrateLinkedList();
    demonstrateStack();
    demonstrateQueue();

    return 0;
}

// Function to demonstrate basic array operations
void demonstrateArray() {
    printf("Array demonstration:\n");
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Print array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

// Function to demonstrate basic linked list operations
void demonstrateLinkedList() {
    printf("Linked List demonstration:\n");

    // Create linked list nodes
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    // Print linked list elements
    printLinkedList(head);
    printf("\n\n");
}

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print linked list elements
void printLinkedList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Function to demonstrate basic stack operations
void demonstrateStack() {
    printf("Stack demonstration:\n");

    // Create a stack of capacity 5
    struct Stack* stack = createStack(5);

    // Perform stack operations
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));
    printf("%d popped from stack\n", pop(stack));

    // Free the allocated memory
    free(stack->array);
    free(stack);
    printf("\n");
}

// Function to create a stack of given capacity
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

// Function to check if the stack is full
int isStackFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

// Function to check if the stack is empty
int isStackEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an item onto the stack
void push(struct Stack* stack, int item) {
    if (isStackFull(stack)) {
        printf("Stack overflow\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Function to pop an item from the stack
int pop(struct Stack* stack) {
    if (isStackEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->array[stack->top--];
}

// Function to demonstrate basic queue operations
void demonstrateQueue() {
    printf("Queue demonstration:\n");

    // Create a queue of capacity 5
    struct Queue* queue = createQueue(5);

    // Perform queue operations
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("%d dequeued from queue\n", dequeue(queue));
    printf("%d dequeued from queue\n", dequeue(queue));

    // Free the allocated memory
    free(queue->array);
    free(queue);
    printf("\n");
}

// Function to create a queue of given capacity
struct Queue* createQueue(unsigned capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Function to check if the queue is full
int isQueueFull(struct Queue* queue) {
    return queue->size == queue->capacity;
}

// Function to check if the queue is empty
int isQueueEmpty(struct Queue* queue) {
    return queue->size == 0;
}

// Function to enqueue an item to the queue
void enqueue(struct Queue* queue, int item) {
    if (isQueueFull(queue)) {
        printf("Queue overflow\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size++;
    printf("%d enqueued to queue\n", item);
}

// Function to dequeue an item from the queue
int dequeue(struct Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}
