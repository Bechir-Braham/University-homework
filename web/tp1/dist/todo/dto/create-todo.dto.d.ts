import { AllTodoDto } from "./all-todo.dto";
declare const CreateTodoDto_base: import("@nestjs/mapped-types").MappedType<Pick<AllTodoDto, "name" | "description">>;
export declare class CreateTodoDto extends CreateTodoDto_base {
}
export {};
