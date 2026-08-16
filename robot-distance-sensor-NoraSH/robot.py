def robot_id (robot_name, charge, distance_m):
    print (f"Robot Name:{robot_name}")
    try:
        distance_m = float (distance_m) #convert distance to a number
        if distance_m == 0:
            return "Emergency Stop"
    
    #Robot battery Loop
    
        if charge > 80:
            print(f"Battery: Battery Full at {charge}%")
        elif charge > 30:
            print (f"Battery: Battery OK at {charge}%")
        else:
            print (f"Battery:Low Battery at {charge}%")
        
    #Robot decision depends on the distance

        if distance_m < 0.5:
            print ("Stop (Obstacle too Close)") 
        elif distance_m < 1:
            print ("Slow (Obstacle nearby)") 
        else:
            print ("Move Fast (Path is Clear)") 
    except ValueError as e:
        print ("Error:", e)
   
    

#Test Cases
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
robot_id("Norah",50,'invalid')

