# **CarND-Controls-PID** 

### In this project, we will learn PID Controllere in the simulator

---

**Build a CarND-Controls-PID Project**
* Clone th repo.
  https://github.com/udacity/CarND-PID-Control-Project
* Make a build directory `mkdir build && cd build`
* Compile : `cmake .. && make`
* Run : `./pid`

[//]: # (Image References)

[image1]: ./writeup_src/Histogram_of_train_dataset.png "Train Dataset"
[image2]: ./writeup_src/Histogram_of_validation_dataset.png "Validataion Dataset"
[image3]: ./writeup_src/Histogram_of_train_dataset.png "Test Dataset"
[image4]: ./writeup_src/color_sample.png "color sample"
[image5]: ./writeup_src/gray_sample.png "gray sample"
[image6]: ./writeup_src/normalize_sample.png "normalize sample"
[image7]: ./writeup_src/seven_sample.png "test sample"
[image8]: ./writeup_src/seven_sample_gray.png "test sample gray"
[image9]: ./writeup_src/seven_sample_result.png "sample result"

## Rubric Points
### Here I will consider the [rubric points](https://review.udacity.com/#!/rubrics/1972/view) individually and describe how I addressed each point in my implementation.  

---
### **Impementation**

* The PID procedure follows what was taught in the lessons
> This project consists of two controllers.
  And, each of them made with a PID controller
  1. Lateral Controller (Steer Angle Control)
  2. Logitudinal Controller (Vehicle Spee Control)

### **Reflection**

* Describe the effect each of the P, I, D components had in your implementation
> P : Propotional control(gain)
>>The P gain increases the input in proportion to the CTE

> I : Integral control(gain)
>>The I gain sets the offset of the wheel. This project vehicle's offset is very small 

> D : Derivative control(gain)
>> The D gain reduece the oscillation of the vehicle by P gain.

* Describe how the final hyperparameters were chosen
> Lateral Controller

  | hyperparameters  	|     Value	        		| 
  |:-----------------:|:---------------------:| 
  | P Gain         		|   30  			          | 
  | I Gain         	  |   128                 |
  | D Gain      	    |   0.001             	|
  
> Logitudinal Controller

  | hyperparameters  	|     Value	        		| 
  |:-----------------:|:---------------------:| 
  | P Gain         		|   30  			          | 
  | I Gain         	  |   128                 |
  | D Gain      	    |   0.001             	|

### **Simulation**

* The vehicle must successfully drive a lap around the track.

  (No tire may leave the drivable portion of the track surface. The car may not pop up onto ledges or roll over any surfaces that would otherwise be considered unsafe)
