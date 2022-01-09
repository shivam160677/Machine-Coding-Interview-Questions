#Strategy Pattern

This pattern lets you define a family of algorithms, put each of them into a seperate class, and make their objects interchangeable.
It should be used when we have scope to add more algorithms in future.
It uses concepts like abstract classes and composition.

In the example added here, Ifly is an abstract class contain fly algorithm which is implemented by its derived classes in their own way. 
Animal classes reference of Ifly interface and not sure which algorithm is going to be calles at runtime.
