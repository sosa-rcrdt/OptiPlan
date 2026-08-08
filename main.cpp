#include <iostream>
#include <string>

enum class TaskStatus
{
    Pending,
    Completed
};

class Task
{
private:
    int id_;
    std::string name_;
    int estimatedDuration_;
    int priority_;
    int deadlineDay_;
    TaskStatus status_;

public:
    Task (int id, const std::string& name, int estimatedDuration, int priority, int deadlineDay)
    : id_(id), name_(name), estimatedDuration_(estimatedDuration), priority_(priority), deadlineDay_(deadlineDay), status_(TaskStatus::Pending)
    {
    }

    int getId() const
    {
        return id_;
    }

    const std::string& getName() const
    {
        return name_;
    }

    int getEstimatedDuration() const
    {
        return estimatedDuration_;
    }

    int getPriority() const
    {
        return priority_;
    }

    int getDeadlineDay() const
    {
        return deadlineDay_;
    }

    TaskStatus getStatus() const
    {
        return status_;
    }
};

int main()
{
    const std::string appName = "OptiPlan";
    const std::string appVersion = "0.0.1";

    std::cout << appName << " v" << appVersion << "\n";
    std::cout << "Planificador inteligente de tareas y horarios.\n";

    return 0;
}
