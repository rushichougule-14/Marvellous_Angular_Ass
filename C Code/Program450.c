// LINKED LIST CHE FUNCTIONif

int MiddleElement(PNODE First)
{
    PNODE Student = First;
    PNODE Teacher = First;


    while(Teacher != NULL)
    {
        Teacher = Teacher ->next->next;
        Student = Student ->next;
    }

    return (Student ->data);
}