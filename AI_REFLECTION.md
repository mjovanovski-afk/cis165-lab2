  AI Reflection — Lab 2

   Tools Used
I used AI (Gemini) as a learning assistant for explanations, debugging, and code review during this lab.

   Key Decision & Prompt
- Prompt: "In mpg.cpp, gallons=16, miles=312, mpg=miles/gallons. The answer it gives me is 19 not 19.5. Should gallons and miles be integers or doubles?"
- AI Suggestion: The AI explained that dividing two integer variables causes integer division in C++, which truncates the decimal portion before storing the value into `mpg`. It suggested declaring `miles` and `gallons` as `double` instead.
- Decision: I accepted this suggestion and declared `miles`, `gallons`, and `mpg` as `double`. This fixed the bug and produced the exact expected output of `19.5`.

   Verification
I manually verified the calculations ($312 / 16 = 19.5$ and $405 / 12 = 33.75$) before running the code. I compiled and executed both programs in OnlineGDB to confirm that the console output matched my expected mathematical calculations.

   Learning & Future Practice
- What I Can Do Now: I can explain why integer division occurs in C++ and how selecting floating-point data types preserves decimal accuracy in division.
- What I Need to Practice: I need to practice declaring the appropriate data types upfront when designing calculations that require fractional results.
