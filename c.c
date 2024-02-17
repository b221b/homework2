#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}#include <stdio.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}int main() {
    sqlite3* db;
    char* errMsg = 0;
    
    int rc = sqlite3_open("test.db", &db);

    if (rc) {
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "База данных открыта успешно\n");
    }

    const char* sql = "CREATE TABLE IF NOT EXISTS Users(Id INT, Name TEXT, Age INT);";
    
    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Таблица создана успешно\n");
    }

    sqlite3_close(db);

    return 0;
}