CREATE FUNCTION getNthHighestSalary(N IN NUMBER) RETURN NUMBER IS
result NUMBER;
BEGIN
    /* Write your PL/SQL query statement below */
    select salary into result
    from (
        select distinct salary, rank() over (order by salary desc) as ranking
        from Employee
        group by salary  
    )
    where ranking = N;
    RETURN result;
END;