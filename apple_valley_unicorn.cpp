#include <iostream>
#include <string>
using namespace std; 

//Define a class to represent a person
class Person {
  private: 
    string firstName; 
    string lastName; 
    int age; 
    
  public:
    //Constructor
    Person() {
      this->firstName = "";
      this->lastName = "";
      this->age = 0;
    }
    
    Person(string firstName, string lastName, int age) {
      this->firstName = firstName;
      this->lastName = lastName;
      this->age = age;
    }
    
    //Getters and Setters
    string getFirstName() {
      return this->firstName;
    }
    
    void setFirstName(string firstName) {
      this->firstName = firstName;
    }
    
    string getLastName() {
      return this->lastName;
    }
    
    void setLastName(string lastName) {
      this->lastName = lastName;
    }
    
    int getAge() {
      return this->age;
    }
    
    void setAge(int age) {
      this->age = age;
    }
};

//Define an Exercise class
class Exercise {
  private: 
    string name; 
    int numRepetitions;
    
  public:
    //Constructor
    Exercise() {
      this->name = "";
      this->numRepetitions = 0;
    }
    
    Exercise(string name, int numRepetitions) {
      this->name = name;
      this->numRepetitions = numRepetitions;
    }
    
    //Getter and Setter
    string getName() {
      return this->name;
    }
    
    void setName(string name) {
      this->name = name;
    }
    
    int getNumRepetitions() {
      return this->numRepetitions;
    }
    
    void setNumRepetitions(int numRepetitions) {
      this->numRepetitions = numRepetitions;
    }
};

//Define a MindBody class to represent a 
//mind-body connection between a person and an exercise 
class MindBody {
  private: 
    Person person; 
    Exercise exercise; 
    
  public:
    //Constructor
    MindBody() {
      this->person = Person();
      this->exercise = Exercise();
    }
    
    MindBody(Person person, Exercise exercise) {
      this->person = person;
      this->exercise = exercise;
    }
    
    //Getters and Setters
    Person getPerson() {
      return this->person;
    }
    
    void setPerson(Person person) {
      this->person = person;
    }
    
    Exercise getExercise() {
      return this->exercise;
    }
    
    void setExercise(Exercise exercise) {
      this->exercise = exercise;
    }
    
    int getCaloriesBurned() {
      //Calculate the number of calories burned
      //based on the person's weight and the exercise 
      int caloriesBurned = (this->person.getAge() * this->exercise.getNumRepetitions()) / 10;
      return caloriesBurned;
    }
};

//Driver code
int main() {
  //Create two Person objects
  Person person1 = Person("John", "Doe", 25);
  Person person2 = Person("Jane", "Doe", 22);
  
  //Create two Exercise objects
  Exercise exercise1 = Exercise("Pushups", 20);
  Exercise exercise2 = Exercise("Situps", 25);
  
  //Create two MindBody objects
  MindBody mindBody1 = MindBody(person1, exercise1);
  MindBody mindBody2 = MindBody(person2, exercise2);
  
  //Print the calories burned by each person for each exercise
  cout << person1.getFirstName() << " burned " << mindBody1.getCaloriesBurned() << " calories doing " << exercise1.getName() << endl;
  cout << person2.getFirstName() << " burned " << mindBody2.getCaloriesBurned() << " calories doing " << exercise2.getName() << endl;
  
  return 0;
}