#include <iostream>
#include "Replicant.h"
#include <memory>


int main()
{
    std::cout << "\n\n\t**** Smart Pointer Demo ****\n\n";


    std::cout << "\nWhen it comes to 'smart pointers' there are 3 main types: unique, shared, and weak.\n";

    //Describe Shared Pointers
    std::cout << "\nShared Pointers: retains shared ownership of an object through a pointer. Several shared_ptr objects may own the same object.";
    std::cout << "\nPro: Shared pointers are great for object communication, mainly between classes and objects.";
    std::cout << "\n Con: They take up more memory than other pointers due to their need of a refernece counter.";
    std::cout << "\nWhen to use: Use only when you want shared ownership of a pointer. This can get messy in code, so shared pointers aren't recommended to use in most cases.";
    
    //Describe Weak Pointers
    std::cout << "\n\nWeak Pointers:  holds a non-owning ('weak') reference to an object that is managed by std::shared_ptr. Weak pointers go hand in hand with shared pointers, and share some of their pros and cons.";
    std::cout << "\nPro: Great for temporary memory storage like a cache.";
    std::cout << "\nCon: Like shared pointers, they can lead to reference cycling, which makes the reference counter never hit zero and creates a memory leak.";
    std::cout << "\nWhen to use: (Example from stackoverflow.com forums) A good example would be a cache. For recently accessed objects, you want to keep them in memory, so you hold a strong pointer to them. Periodically, you scan the cacheand decide which objects have not been accessed recently. You don't need to keep those in memory, so you get rid of the strong pointer. But what if that object is in useand some other code holds a strong pointer to it? If the cache gets rid of its only pointer to the object, it can never find it again. So the cache keeps a weak pointer to objects that it needs to find if they happen to stay in memory. This is exactly what a weak pointer does -- it allows you to locate an object if it's still around, but doesn't keep it around if nothing else needs it.";

    //Describe Unique Pointers
    std::cout << "\n\nUnique Pointers: owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope.";    
    std::cout << "\nPro: Greatly saves on memory useage since the unique pointer lives and dies within its scope.";
    std::cout << "\nCon: Unique pointers in real-world applications can get quite complex and confusing.";
    std::cout << "\nWhen to use: Unique pointers should be used in place of raw pointers, as it does many of the same things, but utilizes even less memory.";

    //Provide example of a unique pointer in use
    std::cout << "\n\nHere is an example of code for a unique pointer: ";
    std::cout << "\nstd::unique_ptr<Replicant> myReplicant = std::make_unique<Replicant>(); \nmyReplicant->Talk('I am part of a unique pointer demo, how long will I live?'); ";
    std::cout << "\n\nAnd here is the output of that code: \n";

    //Create a unique pointer object through the Replicant class
    std::unique_ptr<Replicant> myReplicant = std::make_unique<Replicant>();
    myReplicant->Talk("I am part of a unique pointer demo, how long will I live?");



    return 0;
}
