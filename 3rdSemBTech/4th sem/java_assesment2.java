// class A {
//     private void m(int a) {
//         System.out.println("Private method: " + a);
//     }
//     void m(double a) {
//         System.out.println("Default method: " + a);
//     }
//     protected void m(char a) {
//         System.out.println("Protected method: " + a);
//     }
//     public void m(String a) {
//         System.out.println("Public method: " + a);
//     }
//     void test() {
//         m(1);
//         m(2.5);
//         m('c');
//         m("text");
//     }
// }
// public class java_assesment2 {
//     public static void main(String[] args) {
//         A obj = new A();
//         obj.test();
//     }
// }

// class A {
//     void show() {
//         System.out.println("A method");
//     }
// }
// class B extends A {
//     void show() {
//         super.show();
//         System.out.println("B method");
//     }
// }
// class java_assesment2 {
//     public static void main(String[] args) {
//         B obj = new B();
//         obj.show();
//     }
// }
class A {
    void show() {
        System.out.println("A method");
    }
}
class B extends A {
    void show() {
        System.out.println("B method");
    }
}
class java_assesment2 {
    public static void main(String[] args) {
        A obj1 = new A();
        obj1.show();
        B obj2 = new B();
        obj2.show();
        A obj3 = new B();
        obj3.show();
    }
}

