import { Todo } from "../Model/todo.model";
import { UpdateTodoDto } from "../dto/update-todo.dto";
import { CreateTodoDto } from "../dto/create-todo.dto";
export declare class ManageTodoService {
    private static lastId;
    todos: Todo[];
    addTodo(newTodo: CreateTodoDto): Todo;
    findAll(): Todo[];
    findOne(id: number): Todo;
    update(id: number, updatedTodo: UpdateTodoDto): Todo;
    delete(id: number): Todo;
}
