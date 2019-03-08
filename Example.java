class Student{
	String name;
	int age;
	void display()
	{
		System.out.println(name + " " + age);
	}
	Student()
	{
		name = "no_name";
		age = -1;
		System.out.println("const");
	}
	Student(String name, int age)
	{
		this.name = name;
		this.age = age;
	}
}
class Example
{
	public static void main(String[] args)
	{
		Student s1 = new Student();
		s1.display();
		Student s2 = new Student("Hello", 21);
		s2.display();
	}
}
