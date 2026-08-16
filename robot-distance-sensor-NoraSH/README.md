#A simple python robot control program that monitors battery level and control robot movement according to obstacle distance.
#i started with defining the function Robot ID with variables (name,battery life and distance from the obstacle)
# features (robot name, battery monitoring, obstacle distance detection, error handling for invalid distance value)
def robot_id (robot_name, charge, distance_m):
#i want the name to be printed first
    print (f"Robot Name:{robot_name}") 
    try:
        distance_m = float (distance_m) #convert distance to a number
        if distance_m == 0:
            return "Emergency Stop" #important condition to the robot to stop immediately before hitting the obstacle for 0m distance
    
    #Robot battery Loop (not required step in the assignment) this condition loop to check the battery life: action needed and give the current % of the battery for over that 80% gives full battery, between 80 and 30% gives battery ok, and less than 30% gives low battery
    
        if charge > 80:
            print(f"Battery: Battery Full at {charge}%")
        elif charge > 30:
            print (f"Battery: Battery OK at {charge}%")
        else:
            print (f"Battery:Low Battery at {charge}%")
        
    #Robot decision depends on the distance loop according to conditions for distance less than 0.5m the obstacle is too close and robot should stop, for distance between 0.5m and 1m robot should slow because obstacle is nearby, while for distance more than 1 m then robot should move fast and the path is clear 

        if distance_m < 0.5:
            print ("Stop (Obstacle too Close)") 
        elif distance_m < 1:
            print ("Slow (Obstacle nearby)") 
        else:
            print ("Move Fast (Path is Clear)") 

#try the comand if a value error happen except as e so the code wont crash and print the error (error here when its not a number)

    except ValueError as e:
        print ("Error:", e) 
   
    

#Test Cases all successful
print ("Test Cases1:")
robot_id("Norah",95,0.3)

print ("\nTest Cases2:")
robot_id("Norah",60,1.5)

print ("\nTest Cases3:")
robot_id("Norah",20,0.8)

print ("\nTest Cases4:")
robot_id("Norah",50,2.0)

print ("\nTest Cases5:")
robot_id("Norah",10,0.4)

#Test for bad distance values
print ("\nTest Cases error:")
robot_id("Norah",50,"invalid")

Results:
Test Cases1:
Robot Name:Norah
Battery: Battery Full at 95%
Stop (Obstacle too Close)

Test Cases2:
Robot Name:Norah
Battery: Battery OK at 60%
Move Fast (Path is Clear)

Test Cases3:
Robot Name:Norah
Battery:Low Battery at 20%
Slow (Obstacle nearby)

Test Cases4:
Robot Name:Norah
Battery: Battery OK at 50%
Move Fast (Path is Clear)

Test Cases5:
Robot Name:Norah
Battery:Low Battery at 10%
Stop (Obstacle too Close)

Test Cases error:
Robot Name:Norah
Error: could not convert string to float: 'invalid'
