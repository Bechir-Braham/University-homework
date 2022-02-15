import { Todo } from "./Model/todo.model";
import { ManageTodoService } from "./manage-todo/manage-todo.service";
import { CreateTodoDto } from "./dto/create-todo.dto";
import { UpdateTodoDto } from "./dto/update-todo.dto";
export declare class TodoController {
    private readonly manageTodos;
    todos: Todo[];
    constructor(manageTodos: ManageTodoService);
    getTodos(): Todo[];
    getTodo(id: number): Todo;
    addTodo(newTodo: CreateTodoDto): Todo;
    updateTodo(cuteTodo: UpdateTodoDto, id: number): Todo;
    deleteTodo(id: number): Todo;
}
