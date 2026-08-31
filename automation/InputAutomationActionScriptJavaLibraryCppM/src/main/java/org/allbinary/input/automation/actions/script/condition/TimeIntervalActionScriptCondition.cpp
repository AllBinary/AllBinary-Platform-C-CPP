
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptCondition.h"
#include "TimeIntervalActionScriptConditionInterface.h"
#include "TimeIntervalActionScriptConditionJPanel.h"
#include "TimeIntervalActionScriptConditionData.h"

class TimeIntervalActionScriptCondition: public BasicProfileActionScriptCondition: public TimeIntervalActionScriptConditionInterface {
        

    private: static const NAME: string = "Time Interval";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: timeIntervalActionScriptConditionJPanel: TimeIntervalActionScriptConditionJPanel;

    private: timeHelper: TimeDelayHelper;

public constructor (Node node){
            super(TimeIntervalActionScriptCondition.NAME, node);
                    

                            //For kotlin this is before the body of the constructor.
                    

    actionNode: Node = DomSearchHelper.getNode(TimeIntervalActionScriptConditionData.NAME, node.getChildNodes())!;;
    

                        if(actionNode != 
                                    null
                                )
                        
                                    {
                                    
    nodeList: NodeList = actionNode!.getChildNodes()!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    childNode: Node = nodeList!.item(index)!;;
    

                        if(childNode!.getNodeName()!.compareTo(TimeIntervalActionScriptConditionData.TIME) == 0)
                        
                                    {
                                    
    interval: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.setTimeDelayHelper(new TimeDelayHelper(Integer.valueOf(interval)));
    

                                    }
                                
                        else {
                            


                            throw new Exception("Time Interval Action Script Condition Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw new Exception("Time Interval Action Script Condition Node Null");
                    

                        }
                            
this.init();
    
}


public constructor (){
            super(TimeIntervalActionScriptCondition.NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setTimeDelayHelper(new TimeDelayHelper(0));
    
this.init();
    
}


    init(){
this.timeIntervalActionScriptConditionJPanel= new TimeIntervalActionScriptConditionJPanel(this);
    
}


    public showDialog(){
this.timeIntervalActionScriptConditionJPanel!.getTimeIntervalActionJDialog()!.setVisible(true);
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(TimeIntervalActionScriptConditionData.TIME, Integer.toString(this.timeHelper!.delay));
    
this.logUtil!.putF("HashMap: " +hashMap!.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = super.toXmlNode(document)!;;
    
node.appendChild(ModDomHelper.createNodeWithValueNodes(document, TimeIntervalActionScriptConditionData.NAME, this.toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public log(){
this.logUtil!.putF("Time Interval: " +this.timeHelper!.delay, this, "log");
    
}


    public TimeDelayHelper getTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.timeHelper;
    
}


    public setTimeDelayHelper(TimeDelayHelper timeHelper){
this.timeHelper= timeHelper;
    
}


                //@Throws(Exception.constructor)
            
    public bool shouldProcess(Long frame){

    timeHelper: TimeDelayHelper = this.getTimeDelayHelper()!;;
    

                        if(timeHelper!.isTimeTNT())
                        
                                    {
                                    timeHelper!.setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

