## IPO Chart

| Input | Processing | Output |
| :--- | :--- | :--- |
| currentcharge, requiredcharge, duration, currenttime, membership, disable, available, type | 1. Initialize variables (discount, pprice, cprice, totalprice <- 0, status <- " ", parking, charge <- FALSE). <br> 2. Validate availability and vehicle type. <br> 3. Calculate required charge difference and assign priority based on current charge and membership/disable status. <br> 4. Determine peak/off-peak status and base charging price (cprice) and discount  based on currenttime and membership. <br> 5. Calculate parking price (pprice) based on duration. <br> 6. Apply membership or disability discounts to parking price. <br> 7. Calculate totalprice (cprice + pprice). | Output parking price or full vehicle details (type, currentcharge, requiredcharge, priority, status, cprice, pprice, discount, totalprice) along with warnings/messages. |

## PAC Chart

| Given Data | Processing required | Output required |
| :--- | :--- | :--- |
| currentcharge, requiredcharge, duration, currenttime, membership, disable, available, type. | - Check slot availability and vehicle type `E` or `H`. <br> - Calculate net required charge using requiredcharge - currentcharge. <br> - Evaluate priority levels ("Emergency Charging Priority", "Priority charging", "Normal charging"). <br> - Check if currenttime is within peak ("17:00:00" to "22:00:00") or off-peak hours to set rates. <br> - Calculate parking price based on duration tiers ($\le 2$, $>2$ and $\le 5$, $>5$). <br> - Apply membership (20% off parking and charging) or disability (free parking) if applicable. <br> - Generate long-stay warnings if duration exceeds limit of 8 hours | - Long-stay warning or standard parking duration message. <br> - Parking price if parking=TRUE: a detailed breakdown of type, currentcharge, requiredcharge, priority, status, cprice, pprice, discount, and totalprice |
