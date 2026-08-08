#include <iostream>
#include <string>
#include <vector>

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

    std::vector<Task> tasks;

    tasks.emplace_back(1, "Estudiar C++", 90, 3, 3);
    tasks.emplace_back(2, "Terminar practica de redes", 120, 2, 4);
    tasks.emplace_back(3, "Actualizar portafolio", 60, 1, 5);

    std::cout << appName << " v" << appVersion << "\n";
    std::cout << "Planificador inteligente de tareas y horarios.\n\n";

    std::cout << "Tareas registradas:\n";

    for (const Task& task : tasks)
    {
        std::cout << "ID: " << task.getId() << '\n';
        std::cout << "Nombre: " << task.getName() << '\n';
        std::cout << "Duracion estimada: " << task.getEstimatedDuration() << " minutos\n";
        std::cout << "Prioridad: " << task.getPriority() << '\n';
        std::cout << "Dia limite: " << task.getDeadlineDay() << '\n';

        if (task.getStatus() == TaskStatus::Pending)
        {
            std::cout << "Estado: Pendiente\n";
        }
        else
        {
            std::cout << "Estado: Completada\n";
        }

        std::cout << "-----------------------------\n";
    }

    return 0;
}
