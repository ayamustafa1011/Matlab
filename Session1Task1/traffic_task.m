while true;
    
%rectangle
x=[30,30,26,26,24,24,20,20,30];
y=[45,15,15,5,5,15,15,45,45];
plot(x,y);
fill(x,y,'k');
hold on;

%setting circles parameters
r = 3;
theta = 0:0.1:360;

%red circle
plot(r*cosd(theta)+25,r*sind(theta)+40);
fill(r*cosd(theta)+25,r*sind(theta)+40,'r')
pause(2)
fill(r*cosd(theta)+25,r*sind(theta)+40,'w')
hold on;

%yellow circle
plot(r*cosd(theta)+25,r*sind(theta)+30);
fill(r*cosd(theta)+25,r*sind(theta)+30,'y')
pause(2)
fill(r*cosd(theta)+25,r*sind(theta)+30,'w')
hold on;

%green circle
plot(r*cosd(theta)+25,r*sind(theta)+20);
fill(r*cosd(theta)+25,r*sind(theta)+20,'g')
pause(2)
fill(r*cosd(theta)+25,r*sind(theta)+20,'w')
hold on;

%setting sketch limit
xlim([0 50]);
ylim([0 50]);

%setting labels for each axis
xlabel('x axis');
ylabel('y axis');

end