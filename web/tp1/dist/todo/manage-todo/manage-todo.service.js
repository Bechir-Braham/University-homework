"use strict";
var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var ManageTodoService_1;
Object.defineProperty(exports, "__esModule", { value: true });
exports.ManageTodoService = void 0;
const common_1 = require("@nestjs/common");
const todo_model_1 = require("../Model/todo.model");
let ManageTodoService = ManageTodoService_1 = class ManageTodoService {
    constructor() {
        this.todos = [];
    }
    addTodo(newTodo) {
        let todo = new todo_model_1.Todo();
        todo.id = ManageTodoService_1.lastId++;
        todo = Object.assign(Object.assign({}, todo), newTodo);
        this.todos.push(todo);
        return todo;
    }
    findAll() {
        return this.todos;
    }
    findOne(id) {
        console.log(this.todos);
        for (let todo of this.todos) {
            console.log(id, todo);
            if (todo.id == id) {
                return todo;
            }
        }
        return null;
    }
    update(id, updatedTodo) {
        for (let i in this.todos) {
            if (this.todos[i].id == id) {
                this.todos[i] = Object.assign(Object.assign({}, this.todos[i]), updatedTodo);
                return this.todos[i];
            }
        }
        return null;
    }
    delete(id) {
        for (let i in this.todos) {
            if (this.todos[i].id == id) {
                let tmp = this.todos[i];
                this.todos.splice(Number(i), 1);
                return tmp;
            }
        }
        return null;
    }
};
ManageTodoService.lastId = 0;
ManageTodoService = ManageTodoService_1 = __decorate([
    (0, common_1.Injectable)()
], ManageTodoService);
exports.ManageTodoService = ManageTodoService;
//# sourceMappingURL=manage-todo.service.js.map