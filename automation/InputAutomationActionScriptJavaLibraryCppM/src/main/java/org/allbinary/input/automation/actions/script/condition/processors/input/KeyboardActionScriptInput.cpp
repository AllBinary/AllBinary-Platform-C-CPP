
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
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../../../java/lang/Long.h"
        
#include <java/awt/event/KeyEvent.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
#include <org/allbinary/input/KeyUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptInput.h"
#include "KeyboardActionScriptInputInterface.h"
#include "KeyboardActionScriptInputJPanel.h"
#include "KeyboardActionScriptInputData.h"
#include "KeyboardInputAutomationProcessor.h"

class KeyboardActionScriptInput: public BasicProfileActionScriptInput: public KeyboardActionScriptInputInterface {
        

    private: static const NAME: string = "Keyboard";

    static string getText(std::vector<Integer> integerArray){

    index: int32_t = 0;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

        while(index < integerArray!.length)
        {

    nextInteger: Integer = integerArray[index]!;;
    

                        if(KeyUtil.isNormallyDisplayed(nextInteger))
                        
                                    {
                                    stringBuffer!.append(KeyEvent.getKeyText(nextInteger));
    

                                    }
                                
                        else {
                            stringBuffer!.append("&#" +nextInteger +";");
    

                        }
                            
index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: keyArray: std::vector<Integer> = 
                                                        [
                                                            KeySingletonFactory.getInstance(KeyEvent.VK_0)
                                                        ];

    private: keyboardActionScriptInputJPanel: KeyboardActionScriptInputJPanel;

    private: press: bool= false;

    private: release: bool= false;

    private: delayBetweenKeys: int32_t= 0;

public constructor (Node node){
            super(NAME, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    

    actionNode: Node = DomSearchHelper.getNode(KeyboardActionScriptInputData.NAME, node.getChildNodes())!;;
    

                        if(actionNode != 
                                    null
                                )
                        
                                    {
                                    
    nodeList: NodeList = actionNode!.getChildNodes()!;;
    

    vector: Vector = new Vector();;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    childNode: Node = nodeList!.item(index)!;;
    

                        if(childNode!.getNodeName()!.startsWith(KeyboardActionScriptInputData.KEY))
                        
                                    {
                                    
    keyString: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
vector.add(keyString.valueOf());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(KeyboardActionScriptInputData.DELAY_BETWEEN_KEYS) == 0)
                        
                                    {
                                    
    time: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.setDelayBetweenKeys(Integer.valueOf(time)!.intValue());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(KeyboardActionScriptInputData.PRESS) == 0)
                        
                                    {
                                    
    value: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.setPress(value.slice(, ).join(''));
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(KeyboardActionScriptInputData.RELEASE) == 0)
                        
                                    {
                                    
    value: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.setRelease(value.slice(, ).join(''));
    

                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Input Unknown Node");
                    

                        }
                            
}

this.setKeyArray(vector.toArray(new Array(vector.length)) as Integer[]);
    

                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Input Node Null");
                    

                        }
                            
this.setAllowsChildren(false);
    

                        if(!this.isPress() && !this.isRelease())
                        
                                    {
                                    this.setNormal();
    

                                    }
                                
this.keyboardActionScriptInputJPanel= new KeyboardActionScriptInputJPanel(this);
    
}


public constructor (){
            super(NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(!this.isPress() && !this.isRelease())
                        
                                    {
                                    this.setNormal();
    

                                    }
                                
this.setAllowsChildren(false);
    
this.setTime(120);
    
this.keyboardActionScriptInputJPanel= new KeyboardActionScriptInputJPanel(this);
    
}


    public int32_t getDelayBetweenKeys(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.delayBetweenKeys;
    
}


    public setDelayBetweenKeys(int32_t delayBetweenKeys){
this.delayBetweenKeys= delayBetweenKeys;
    
}


    public bool isPress(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.press;
    
}


    public setPress(bool press){
this.press= press;
    
}


    public bool isRelease(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.release;
    
}


    public setRelease(bool release){
this.release= release;
    
}


    public bool isNormal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isRelease() && this.isPress();
    
}


    public setNormal(){
this.setPress(true);
    
this.setRelease(true);
    
}


    public std::vector<Integer> getKeyArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.keyArray;
    
}


    public setKeyArray(std::vector<Integer> keyArray){

                        if(keyArray != 
                                    null
                                )
                        this.logUtil!.putF(CommonLabels.getInstance()!.START +keyArray!.length, this, "setKeyArray")
this.keyArray= keyArray;
    
}


    public showDialog(){
this.keyboardActionScriptInputJPanel!.getKeyActionJDialog()!.setVisible(true);
    
}


    public string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getText(this.getKeyArray());;
    
}


    public setText(string text){
this.logUtil!.putF(CommonLabels.getInstance()!.START +text, this, "setText");
    

    integerArray: std::vector<Integer> = this.integerArrayValue(text)!;;
    
this.setKeyArray(integerArray);
    
}


    std::vector<Integer> integerArrayValue(string text){
this.logUtil!.putF(CommonLabels.getInstance()!.START +text, this, "integerArrayValue");
    

    vector: Vector = new Vector();;
    

    index: int32_t = 0;;
    

        while(index < text.length)
        {

    aChar: char = text[index]!;;
    

                        if(aChar == '&')
                        
                                    {
                                    
                        if(text[index +1] == '#')
                        
                                    {
                                    
    endIndex: int32_t = text.indexOf(';', index +1)!;;
    

                        if(endIndex !=  -1)
                        
                                    {
                                    
    nextCharString: string = text.substring(index +2, endIndex)!;;
    
this.logUtil!.putF("Next Char String: " +nextCharString, this, "integerArrayValue");
    
vector.add(substring.valueOf());
    
index= index +nextCharString!.length +3;
    


                        continue
                    

                                    }
                                

                                    }
                                

                                    }
                                
vector.add(KeySingletonFactory.getHashtable()!.get(aChar.slice(, ).join('')));
    
index++;
    
}


    integerArray: std::vector<Integer> = vector.toArray(new Array(vector.length)) as Integer[];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return integerArray;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    




                        for (
    index: int32_t = 0;index < this.getKeyArray()!.length; index++)
        {
hashMap!.put(KeyboardActionScriptInputData.KEY +index, Integer.toString(this.getKeyArray()[index]!));
    
}

hashMap!.put(KeyboardActionScriptInputData.DELAY_BETWEEN_KEYS, Integer.toString(this.getDelayBetweenKeys()));
    
hashMap!.put(KeyboardActionScriptInputData.PRESS, Boolean.toString(this.isPress()));
    
hashMap!.put(KeyboardActionScriptInputData.RELEASE, Boolean.toString(this.isRelease()));
    
this.logUtil!.putF("HashMap: " +hashMap!.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = super.toXmlNode(document)!;;
    
node.appendChild(ModDomHelper.createNodeWithValueNodes(document, KeyboardActionScriptInputData.NAME, this.toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public process(Long frame){
KeyboardInputAutomationProcessor.process(this);
    
}


    public log(){
this.logUtil!.putF(this.toString(), this, "log");
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toString());
    
stringBuffer!.append(" Text: ");
    
stringBuffer!.append(this.getText());
    
stringBuffer!.append(" isPress: ");
    
stringBuffer!.appendboolean(this.isPress());
    
stringBuffer!.append(" isRelease: ");
    
stringBuffer!.appendboolean(this.isRelease());
    
stringBuffer!.append(" Between Key Delay: ");
    
stringBuffer!.appendint(this.getDelayBetweenKeys());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

