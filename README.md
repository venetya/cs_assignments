# Weekly Assignments

#### [Week 1](#week-one-content) | [Week 2](#real-cool-heading) | [Week 3](#week-three-content) | [Week 4](#week-four-content) | [Week 5](#week-five-content)


#Week One Content  
## Week of 10/30/2017

1. Video:  
- [Basics of computer memory and architecture:](https://www.youtube.com/watch?v=xyBbocLXbNY) 

2. Reading:  
- [HTTP Basics](https://www.ntu.edu.sg/home/ehchua/programming/webprogramming/HTTP_Basics.html)  
- [Premature Optimisation](http://ubiquity.acm.org/article.cfm?id=1513451)  
- [Good article on (numerical) data representation](https://www.codementor.io/bennylope/it-makes-cents-data-representation-choices-d8vd7l2uh) 

3. Redis is a very popular in-memory database. This means it stores all data in RAM instead of most databases that store data on the hard disk. What are the advantages and dangers of this 100% in-memory approach? 

1. Define the term "protocol". Provide 3 examples of protocols of human interaction.
  
1. Summarize the discussion on software engineering article. Provide your opinions on how much time you should spend making code optimal as opposed to moving on to the next task. 

---
## Answers:
### Redis
#### Advantages:
- faster performance since it doesn't have to access the file system/disk
- smaller footprint since it doesn't need to carry the overhead of RDBMS

#### Disadvantages
- size of data set is limited to amount of available primary memory
- data is not persisted once the session ends

### Protocol
#### Definition:
A system of rules that governs interaction between entities. 

#### Examples:
- Military - It is customary for a soldier to stand at attention when a superior officer walks by.
- Diplomatic - Heads of State do not enter the country without the President's knowledge.
- Social - It is considered good manners to say "Thank you" when someone offers you a gift.

### "Premature Optimization is the Root of All Evil"
#### Summary:
The gist of this article is that the statement by Sir Tony Hoare has been frequently taken out of context and, consequently, misunderstood by many software engineers. These individuals have mistakenly interpreted these words to mean that writing efficient code is not important. However, when taken in the proper context, one understands that Hoare was actually saying that being concerned about small efficiencies at too granular a level before you know what the actual performance bottlenecks are is not useful. This does not mean that optimization itself is not useful, rather, it should be part of the design process.

### Key Points
- When designing software at a system level, performance issues should always be considered from the beginning. A good software developer will do this automatically, having developed a feel for where performance issues will cause problems.

- Software engineers should worry about other issues (such as good algorithm design and good implementations of those algorithms) before they worry about micro-optimizations such as how many CPU cycles a particular statement consumes.

- Efficiency is an important criterion when developing software. Software engineers must accept optimization as a necessary step and not reject it as evil.

- The only way to gain the experience needed to properly optimize code is by constant practice: 
1. profile everything (timings) 
1. be willing to make some mistakes 

- Premature optimization is always bad, but the truth is that some concern about small efficiencies during program development is not premature.

- Design performance into an application from the very start. Design first, code second. 

#Real Cool Heading
This is a real cool heading with some real cool content.

#Week Two Content 
to be continued...


#Week Three Content  
to be continued...


#Week Four Content  
to be continued...


#Week Five Content  
to be continued...
