## IPO Chart

| Input | Processing | Output |
| :--- | :--- | :--- |
| category, if it is an emergency, and if valid permit | 1. Initialise capacityA, capacityB, capacityC, vehicle_accepted, rejected_V, B, C, (RA, RB, RC with 0. <br> 2. Validate the input type, category, permit, and emergency. <br> 3. Increment vehicle <br> 4. Only if the permit is valid or if it is an emergency, check for category and type in each category. <br> 5. Increment category capacity designated capacity, if space available. Else, output an error msg, incrementing accepted, rejected, and vehicle type accordingly. <br> 6. Check for highest occupancy by comparing each zone. | total vehicles accepted and rejected vehicle, total bike, cars and vans, zones with highest occupancy if applicable |

## PAC Chart

| Given Data | Processing required | Output required |
| :--- | :--- | :--- |
| category, type, if emergency and permit. | - Validate each input. <br> - To grant a permit, first check if the permit is valid or if it is an emergency. Then check the category, and for each category, check vehicle type. <br> - If space is available, allow them to park in the specific zone. <br> - Increment all vehicles processed, accepted vehicles, rejected vehicles, bikes, cars, vans accordingly. <br> - Compare parked cars in each zone to determine the zone with the highest occupancy. <br> - Also calculate the remaining space for each zone. | total vehicles, accepted vehicles, rejected vehicles, total bikes, cars, vans, zone with highest occupancy if applicable. |
