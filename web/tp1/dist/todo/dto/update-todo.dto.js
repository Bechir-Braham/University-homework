"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.UpdateTodoDto = void 0;
const mapped_types_1 = require("@nestjs/mapped-types");
const all_todo_dto_1 = require("./all-todo.dto");
class UpdateTodoDto extends (0, mapped_types_1.PartialType)(all_todo_dto_1.AllTodoDto) {
}
exports.UpdateTodoDto = UpdateTodoDto;
//# sourceMappingURL=update-todo.dto.js.map