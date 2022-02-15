"use strict";
var __decorate = (this && this.__decorate) || function (decorators, target, key, desc) {
    var c = arguments.length, r = c < 3 ? target : desc === null ? desc = Object.getOwnPropertyDescriptor(target, key) : desc, d;
    if (typeof Reflect === "object" && typeof Reflect.decorate === "function") r = Reflect.decorate(decorators, target, key, desc);
    else for (var i = decorators.length - 1; i >= 0; i--) if (d = decorators[i]) r = (c < 3 ? d(r) : c > 3 ? d(target, key, r) : d(target, key)) || r;
    return c > 3 && r && Object.defineProperty(target, key, r), r;
};
var __metadata = (this && this.__metadata) || function (k, v) {
    if (typeof Reflect === "object" && typeof Reflect.metadata === "function") return Reflect.metadata(k, v);
};
var __param = (this && this.__param) || function (paramIndex, decorator) {
    return function (target, key) { decorator(target, key, paramIndex); }
};
Object.defineProperty(exports, "__esModule", { value: true });
exports.TodoController = void 0;
const common_1 = require("@nestjs/common");
const todo_model_1 = require("./Model/todo.model");
const manage_todo_service_1 = require("./manage-todo/manage-todo.service");
const create_todo_dto_1 = require("./dto/create-todo.dto");
const update_todo_dto_1 = require("./dto/update-todo.dto");
let TodoController = class TodoController {
    constructor(manageTodos) {
        this.manageTodos = manageTodos;
        this.todos = [];
    }
    getTodos() {
        return this.manageTodos.findAll();
    }
    getTodo(id) {
        let todo = this.manageTodos.findOne(id);
        if (todo === null) {
            throw new common_1.NotFoundException("todo not found");
        }
        return todo;
    }
    addTodo(newTodo) {
        return this.manageTodos.addTodo(newTodo);
    }
    updateTodo(cuteTodo, id) {
        let todo = this.manageTodos.update(id, cuteTodo);
        if (todo === null) {
            throw new common_1.NotFoundException("todo not found");
        }
        return todo;
    }
    deleteTodo(id) {
        let todo = this.manageTodos.delete(id);
        if (todo === null) {
            throw new common_1.NotFoundException("todo not found");
        }
        return todo;
    }
};
__decorate([
    (0, common_1.Get)(),
    __metadata("design:type", Function),
    __metadata("design:paramtypes", []),
    __metadata("design:returntype", Array)
], TodoController.prototype, "getTodos", null);
__decorate([
    (0, common_1.Get)(":id"),
    __param(0, (0, common_1.Param)("id")),
    __metadata("design:type", Function),
    __metadata("design:paramtypes", [Number]),
    __metadata("design:returntype", void 0)
], TodoController.prototype, "getTodo", null);
__decorate([
    (0, common_1.Post)(),
    __param(0, (0, common_1.Body)()),
    __metadata("design:type", Function),
    __metadata("design:paramtypes", [create_todo_dto_1.CreateTodoDto]),
    __metadata("design:returntype", todo_model_1.Todo)
], TodoController.prototype, "addTodo", null);
__decorate([
    (0, common_1.Patch)(":id"),
    __param(0, (0, common_1.Body)()),
    __param(1, (0, common_1.Param)("id")),
    __metadata("design:type", Function),
    __metadata("design:paramtypes", [update_todo_dto_1.UpdateTodoDto, Number]),
    __metadata("design:returntype", todo_model_1.Todo)
], TodoController.prototype, "updateTodo", null);
__decorate([
    (0, common_1.Delete)(":id"),
    __param(0, (0, common_1.Param)("id")),
    __metadata("design:type", Function),
    __metadata("design:paramtypes", [Number]),
    __metadata("design:returntype", void 0)
], TodoController.prototype, "deleteTodo", null);
TodoController = __decorate([
    (0, common_1.Controller)("todo"),
    __metadata("design:paramtypes", [manage_todo_service_1.ManageTodoService])
], TodoController);
exports.TodoController = TodoController;
//# sourceMappingURL=todo.controller.js.map