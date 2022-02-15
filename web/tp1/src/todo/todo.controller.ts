import { Body, Controller, Delete, Get, NotFoundException, Param, Patch, Post } from "@nestjs/common";
import { Todo } from "./Model/todo.model";
import { ManageTodoService } from "./manage-todo/manage-todo.service";
import { CreateTodoDto } from "./dto/create-todo.dto";
import { UpdateTodoDto } from "./dto/update-todo.dto";

@Controller("todo")
export class TodoController {
  todos: Todo[] = [];

  constructor(private readonly manageTodos: ManageTodoService) {
  }

  @Get()
  getTodos(): Todo[] {
    return this.manageTodos.findAll();
  }

  @Get(":id")
  getTodo(@Param("id") id: number) {
    let todo = this.manageTodos.findOne(id);
    if (todo === null) {
      throw new NotFoundException("todo not found");
    }
    return todo;

  }

  @Post()
  addTodo(@Body() newTodo: CreateTodoDto): Todo {
    return this.manageTodos.addTodo(newTodo);
  }

  @Patch(":id")
  updateTodo(@Body() cuteTodo: UpdateTodoDto, @Param("id") id: number): Todo {
    let todo = this.manageTodos.update(id, cuteTodo);
    if (todo === null) {
      throw new NotFoundException("todo not found");
    }
    return todo;
  }

  @Delete(":id")
  deleteTodo(@Param("id") id: number) {
    let todo = this.manageTodos.delete(id);
    if (todo === null) {
      throw new NotFoundException("todo not found");
    }
    return todo;

  }
}
