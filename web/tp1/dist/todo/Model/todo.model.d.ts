import { TodoStatusEnum } from '../enums/todo-status.enum';
export declare class Todo {
    id: number;
    name: string;
    description: string;
    createdAt: Date;
    status: TodoStatusEnum;
    constructor(id?: number, name?: string, description?: string, createdAt?: Date, status?: TodoStatusEnum);
}
