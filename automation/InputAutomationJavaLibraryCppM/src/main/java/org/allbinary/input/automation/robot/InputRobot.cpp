
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <javax/help/HelpSet.h>

      
#include <org/allbinary/input/automation/PointHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputRobotInterface.h"
#include "Robot.h"
#include "GraphicsDevice.h"
#include "MouseInfo.h"
#include "Point.h"
#include "Rectangle.h"
#include "Color.h"

class InputRobot
            : public Object
        : public InputRobotInterface {
        

    public static const NAME: string = "Java Robot";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: robot: Robot;

public constructor (GraphicsDevice graphicsDevice){

            super();
        this.robot= new Robot(graphicsDevice);
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputRobot.NAME;
    
}


    public HelpSet getHelpSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Point getMousePoint(){

    point: Point = MouseInfo.getPointerInfo()!.getLocation()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return point;
    
}


                //@Throws(Exception.constructor)
            
    public mouseMoveToTarget(Rectangle rectangle, Integer x, Integer y){

    point: Point = PointHelper.getCenterPoint(rectangle)!;;
    
this.robot.mouseMove(point.x +x, point.y +y);
    

    message: string = new StringMaker().append("Moved Mouse To: x: ")!.appendint(point.x)!.append(" y: ")!.appendint(point.y)!.append(" in the middle of: ")!.append(StringUtil.getInstance()!.toString(rectangle))!.toString()!;;
    
this.logUtil!.putF(message, this, "moveMouseToTarget");
    
}


    public mouseMove(Point point){
this.mouseMove(point.x, point.y);
    
}


    public mouseMove(int32_t x, int32_t y){
this.robot.mouseMove(x, y);
    

    message: string = new StringMaker().append("Moved Mouse To: x: ")!.appendint(x)!.append(" y: ")!.appendint(y)!.toString()!;;
    
this.logUtil!.putF(message, this, "moveMouse");
    
}


                //@Throws(Exception.constructor)
            
    public mouseMoveToTarget(Rectangle rectangle){
this.mouseMoveToTarget(rectangle, 0, 0);
    
}


    public BufferedImage createScreenCapture(Rectangle screenRect){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.robot.createScreenCapture(screenRect);;
    
}


    public delay(Integer ms){
this.robot.delay(ms);
    
}


    public Integer getAutoDelay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.robot.getAutoDelay();;
    
}


    public Color getPixelColor(Integer x, Integer y){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.robot.getPixelColor(x, y);;
    
}


    public bool isAutoWaitForIdle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.robot.isAutoWaitForIdle();;
    
}


    public keyPress(Integer keycode){
this.robot.keyPress(keycode);
    
}


    public keyRelease(Integer keycode){
this.robot.keyRelease(keycode);
    
}


    public mouseMove(Integer x, Integer y){
this.robot.mouseMove(x, y);
    
}


    public mousePress(Integer buttons){
this.robot.mousePress(buttons);
    
}


    public mouseRelease(Integer buttons){
this.robot.mouseRelease(buttons);
    
}


    public mouseWheel(Integer wheelAmt){
this.robot.mouseWheel(wheelAmt);
    
}


    public setAutoDelay(Integer ms){
this.robot.setAutoDelay(ms);
    
}


    public setAutoWaitForIdle(bool isOn){
this.robot.setAutoWaitForIdle(isOn);
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.robot.toString();;
    
}


    public waitForIdle(){
this.robot.waitForIdle();
    
}


    public on(){
}


    public off(){
}


};

            

