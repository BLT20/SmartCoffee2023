# Programming Logic

> For each behaviour, create the mermaid flowchart. Start each flowchart with a Heading naming the functionality. Delete this comment prior to submission.

## Logic 1

```mermaid
flowchart TD
    Start([Sonar])
    checkUser{Is user in range?}
    checkCup{has cup been detected?}
    makeCoffee(Make Coffee)
    End([End])
    
    Start-->checkUser--yes-->
    checkCup--yes-->makeCoffee-->End
    checkUser--no-->End
    checkCup--no-->End
```