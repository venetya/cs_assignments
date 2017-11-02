# Weekly Assignments

## Week of 10/30/2017

1. Video:
Basics of computer memory and architecture:
https://www.youtube.com/watch?v=xyBbocLXbNY

1. Reading:  
- [HTTP Basics](https://www.ntu.edu.sg/home/ehchua/programming/webprogramming/HTTP_Basics.html)  
- [Premature Optimisation](http://ubiquity.acm.org/article.cfm?id=1513451)  

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
The gist of this article is that the statement by Sir Tony Hoare has been frequently taken out of context and, consequently, misunderstood by many software engineers. These individuals have mistakenly interpreted these words to mean that writing efficient code is not important. However, when taken in the proper context, one understands that Hoare was actually saying that being concerned about small efficiencies at too granular a level before you know what the actual performance bottlenecks are is not useful. This does not mean that optimization is not useful, rather, it should be part of the design process.
