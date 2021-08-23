#pragma once
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

//��������� ������
enum exprType
{
	Int_value,
	Float_value,
	Id,
	array_element_access,
	Plus,
	Minus,
	Multiplication,
	Division,
	Bracket,
	Reminder,
	EQ,
	SEQ,
	NEQ,
	GR,
	SM,
	GREQ,
	SMEQ,
	Assign,
	Pow,
	Or,
	And,
	Not,
	unary_minus,
	unary_plus,
	functionCall
};

enum stmtType
{
	Null,
	EXPR,
	BLOCK,
	Break,
	array_handling,
	If,
	ElseIf,
	For,
	While,
	doWhile,
	Switch,
	ForOf,
	consoleIn,
	consoleOut,
	functionDecl
};

enum stmtListType { Stmt_List, ElseIf_Stmt_List, Case_Stmt_List };

struct expr_struct
{
	enum exprType type;
	int Num;
	float Float;
	const char* value;
	struct expr_struct* left;
	struct expr_struct* right;
	struct function_call_struct* function_call;
};

struct expr_list_struct
{
	struct expr_struct* expr_value;
	struct expr_list_struct* NextExpr;
};

struct stmt_struct
{
	enum stmtType type;
	struct expr_struct* expr_value;
	struct stmt_list_struct* Block;
	struct array_handling_struct* array;
	struct stmt_struct* Stmt;
	struct if_stmt_struct* IfStmt;
	struct for_stmt_struct* ForStmt;
	struct switch_stmt_struct* SwitchStmt;
	struct forOf_stmt_struct* ForOfStmt;
	struct function_stmt_struct* Function;
};

struct stmt_list_struct
{
	enum stmtListType type;
	struct stmt_struct* First;
	struct stmt_list_struct* Next;
	struct elseif_stmt_list_struct* ElseIfStmtList;
	struct case_stmt_list_struct* SwitchCasesStmtList;
};

struct if_stmt_struct
{
	struct expr_struct* expr_value;
	struct stmt_struct* trueBranch;
	struct stmt_struct* falseBranch;
	struct elseif_stmt_list_struct* elseIfBranches;
};

struct elseif_stmt_struct
{
	struct expr_struct* expr_value;
	struct stmt_struct* Stmt;
};

struct elseif_stmt_list_struct
{
	struct elseif_stmt_struct* First;
	struct elseif_stmt_list_struct* Next;
};

struct for_stmt_struct
{
	struct expr_struct* Initial;
	struct expr_struct* Condition;
	struct expr_struct* Final_expr;
	struct stmt_struct* Stmt;
};

struct switch_stmt_struct
{
	struct expr_struct* expr_value;
	struct case_stmt_list_struct* CasesStmtList;
	struct default_stmt_struct* DefaultStmt;
};

struct case_stmt_list_struct
{
	struct case_stmt_struct* First;
	struct case_stmt_list_struct* Next;
};

struct default_stmt_struct
{
	struct stmt_list_struct* StmtList;
};

struct case_stmt_struct
{
	struct expr_struct* expr_value;
	struct stmt_list_struct* StmtList;
};

struct forOf_stmt_struct
{
	struct expr_struct* expr_value;
	struct expr_struct* ExprIterable;
	struct stmt_struct* Stmt;
};

struct array_handling_struct
{
	struct expr_struct* expr_value;
	struct expr_list_struct* ArrayElements;
};

struct id_list
{
	std::vector<std::string> ids;
};

struct function_stmt_struct
{
	const char* name;
	id_list* arguments; 
	struct stmt_list_struct* stmt;
};
struct function_call_struct
{
	const char* name;
	struct expr_list_struct* function_arguments;
};

struct expr_struct* create_digit_expr(int _num);
struct expr_struct* create_float_expr(float _float);
struct expr_struct* create_variable_expr(char* _value);
struct expr_struct* create_binary_operation_expr(enum exprType _type, struct expr_struct* _left,
                                              struct expr_struct* _right);
struct expr_struct* create_unary_operation_expr(enum exprType _type, struct expr_struct* _left);

struct expr_struct* create_function_expr(function_call_struct* function_call);

struct stmt_struct* create_stmt(struct expr_struct* _expr);
struct stmt_struct* create_stmt_null();
struct stmt_struct* create_stmt_break();
struct stmt_struct* create_block_stmt(struct stmt_list_struct* _block);
struct stmt_list_struct* create_stmt_list(struct stmt_struct* _stmt);
struct stmt_list_struct* add_to_stmt_list(struct stmt_list_struct* _head, struct stmt_struct* _stmt);
struct stmt_struct* fill_if_stmt(struct if_stmt_struct* if_stmt_struct);
struct if_stmt_struct* create_if_stmt(struct expr_struct* _expr, struct stmt_struct* _stmtTrue,
                                    struct stmt_struct* _stmtFalse);
struct function_stmt_struct* function_decl_stmt(const char* _name,
                                                id_list* _functionArgs,
                                                stmt_list_struct* _stmt);
struct function_call_struct* function_call_expr(const char* _name,
                                                struct expr_list_struct* _functionArgs);
struct if_stmt_struct* create_else_if_stmt(struct expr_struct* _expr, struct stmt_struct* _stmtTrue,
                                        struct elseif_stmt_list_struct* _elseIfStmtList,
                                        struct stmt_struct* _stmtFalse);
struct elseif_stmt_struct* create_simple_else_if_stmt(struct expr_struct* _expr, struct stmt_struct* _stmt);
struct elseif_stmt_list_struct* create_else_if_stmt_list(struct elseif_stmt_struct* _stmt);
struct elseif_stmt_list_struct* add_to_else_if_stmt_list(struct elseif_stmt_list_struct* _elseIfHead,
                                                    struct elseif_stmt_struct* _stmt);
struct stmt_struct* fill_for_stmt(struct for_stmt_struct* _forStmt);
stmt_struct* fill_function_stmt(struct function_stmt_struct* _functionStmt);
struct for_stmt_struct* create_for_stmt(struct expr_struct* _initial, struct expr_struct* _condition,
                                      struct expr_struct* _finalExp, struct stmt_struct* _stmt);
struct stmt_struct* create_while_stmt(struct expr_struct* _condition, struct stmt_struct* _stmt);
struct stmt_struct* create_do_while_stmt(struct stmt_struct* _stmt, struct expr_struct* _condition);
struct stmt_struct* create_console_in_stmt(struct expr_struct* _expr);
struct stmt_struct* create_console_out_stmt(struct expr_struct* _expr);
struct stmt_struct* fill_switch_stmt(struct switch_stmt_struct* _switchStmt);
struct switch_stmt_struct* create_switch_stmt(struct expr_struct* _expr, struct case_stmt_list_struct* _caseStmtList,
                                            struct default_stmt_struct* _defaultStmt);
struct case_stmt_list_struct* create_case_stmt_list(struct case_stmt_struct* _caseStmt);
struct case_stmt_list_struct* add_to_case_stmt_list(struct case_stmt_list_struct* _caseHead, struct case_stmt_struct* _stmt);
struct case_stmt_struct* create_case_stmt(struct expr_struct* _expr, struct stmt_list_struct* _stmtList);
struct default_stmt_struct* create_default_stmt(struct stmt_list_struct* _stmtList);
struct stmt_struct* fill_for_of_stmt(struct forOf_stmt_struct* _forOfStmt);
struct forOf_stmt_struct* create_for_of_stmt(struct expr_struct* _expr, struct expr_struct* _exprIterable,
                                          struct stmt_struct* _stmt);
struct stmt_struct* create_array(struct array_handling_struct* _array);
struct array_handling_struct* create_array_handling_stmt(struct expr_struct* _expr,
                                                      struct expr_list_struct* _arrayElements);
struct expr_list_struct* create_expr_list(struct expr_struct* _expr);
struct expr_list_struct* add_to_expr_list(struct expr_list_struct* _exprHead, struct expr_struct* _expr);
