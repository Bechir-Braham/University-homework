"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Todo = void 0;
const todo_status_enum_1 = require("../enums/todo-status.enum");
class Todo {
    constructor(id = 0, name = '', description = '', createdAt = new Date(), status = todo_status_enum_1.TodoStatusEnum.waiting) {
        this.id = id;
        this.name = name;
        this.description = description;
        this.createdAt = createdAt;
        this.status = status;
    }
}
exports.Todo = Todo;
//# sourceMappingURL=todo.model.js.map