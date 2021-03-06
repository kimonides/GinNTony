/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 14 "parser.y" /* yacc.c:1909  */
 
	#include "ast.hpp" 	
	#include <string>

#line 49 "parser.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_and = 258,
    T_end = 259,
    T_list = 260,
    T_ref = 261,
    T_bool = 262,
    T_exit = 263,
    T_mod = 264,
    T_return = 265,
    T_char = 266,
    T_false = 267,
    T_true = 268,
    T_new = 269,
    T_skip = 270,
    T_decl = 271,
    T_for = 272,
    T_nil = 273,
    T_tail = 274,
    T_head = 275,
    T_def = 276,
    T_nilq = 277,
    T_if = 278,
    T_else = 279,
    T_elsif = 280,
    T_not = 281,
    T_int = 282,
    T_or = 283,
    T_assign = 284,
    T_ge = 285,
    T_le = 286,
    T_neq = 287,
    T_constInt = 288,
    T_var = 289,
    T_constChar = 290,
    T_constString = 291,
    UPLUS = 292,
    UMINUS = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "parser.y" /* yacc.c:1909  */

	FunctionDefinition 			*func_def;
	FunctionDeclaration 		*func_decl;
	DefinitionList 				*def_list;
	Header 						*header;
	Stmt 						*stmt;
	StmtList 					*stmt_list;
	Formal 						*formal;
	FormalList 					*formal_list;
	Expr 						*expr;
	ExprList 					* expr_list;
	Var 						*var;
	VarList 					*var_list;
	VarDefinition 				*var_definition;
	If 							*ifClass;
	For 						*forClass;
	CallObject 					*call_object;
	std::string 				*type;

	char 						chr;
	int 						num;
	const char 					*str;

#line 124 "parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
