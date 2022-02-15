"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.CreateTodoDto = void 0;
const mapped_types_1 = require("@nestjs/mapped-types");
const all_todo_dto_1 = require("./all-todo.dto");
class CreateTodoDto extends (0, mapped_types_1.PickType)(all_todo_dto_1.AllTodoDto, ['name', "description"]) {
}
exports.CreateTodoDto = CreateTodoDto;
//# sourceMappingURL=create-todo.dto.js.map