
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Throwable.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputMapping.h"

class InputToGameKeyMapping: public InputMapping {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static InputToGameKeyMapping getNullInstance(){

                        if(InputToGameKeyMapping::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    InputToGameKeyMapping::instance= InputToGameKeyMapping();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputToGameKeyMapping::instance() as InputToGameKeyMapping;
    
}


    private: const GameKeyFactory gameKeyFactory = GameKeyFactory::getInstance();

    private: const std::vector<GameKey> mappedGameKeys = 
                                                        {
                                                            this->gameKeyFactory.UP,this->gameKeyFactory.DOWN,this->gameKeyFactory.LEFT,this->gameKeyFactory.RIGHT
                                                        };

    private: const std::vector<GameKey> platformToGameKeyMapping = new Array(InputFactory::getInstance().MAX);

    protected: std::vector<GameKey> negativePlatformToGameKeyMapping = {};

public: InputToGameKeyMapping(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->clear();
    
}


    private: void clear(){




                        for (
    int32_t index = this->platformToGameKeyMapping.size() -1;index >= 0; index--)
        {
this->platformToGameKeyMapping[index]= this->gameKeyFactory.NONE;
    
}

}


    protected: void removeAll(){
super.removeAll();
    
this->clear();
    
}


    public: void addMapping(InputToGameKeyMapping inputToGameKeyMapping){




                        for (
    int32_t index = inputToGameKeyMapping.getMaxMappable() -1;index >= 0; index--)
        {

    Input input = inputToGameKeyMapping.getInstance(index);;
    

                        if(input != this->gameKeyFactory.NONE)
                        
                                    {
                                    this->addAll(input, inputToGameKeyMapping.getMappedInput(input));
    

                                    }
                                
}

}


    private: void addAll(Input input, BasicArrayList list){




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {

    Input mappedToInput = list.objectArray[index]! as Input;;
    
this->add(input, mappedToInput);
    
}

}


    public: void add(Input input, Input mappedToInput){
super.add(input, mappedToInput);
    
this->set(input, mappedToInput);
    
}


    public: void remove(Input input, Input mappedToInput){
this->logUtil.putF(StringMaker().append(CommonLabels::getInstance().START_LABEL).append(StringUtil::getInstance().toString(input)).append(" == ").append(StringUtil::getInstance().toString(mappedToInput)).toString(), this, "InputToGameKeyMapping::remove");
    
super.remove(input, mappedToInput);
    
this->set(input, this->gameKeyFactory.NONE);
    
}


    private: void set(Input input, Input mappedToInput){

    int32_t id = mappedToInput.getId();;
    

                        if(id >= 0 && id < this->platformToGameKeyMapping.size())
                        
                                    {
                                    this->platformToGameKeyMapping[id]= input as GameKey;
    

                                    }
                                
}


    public: int32_t getMaxMappable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformToGameKeyMapping.size();
    
}


    public: BasicArrayList getReverseInstance(int32_t id){

    BasicArrayList list = BasicArrayListD();;
    

    InputFactory inputFactory = InputFactory::getInstance();;
    




                        for (
    int32_t index = 0;index < this->platformToGameKeyMapping.size(); index++)
        {

                        if(this->platformToGameKeyMapping[index]!.getId() == id)
                        
                                    {
                                    
    Input input = inputFactory.getInstanceById(index);;
    

                        if(input != 
                                    nullptr
                                )
                        
                                    {
                                    list.add(input);
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


                //@Throws(Exception.constructor)
            
    private: void initGameKey(Canvas canvas, GameKey gameKey){

    int32_t key = canvas.getKeyCode(gameKey.getId());;
    

                        if(key < 0 &&  -key < this->negativePlatformToGameKeyMapping.size())
                        
                                    {
                                    this->negativePlatformToGameKeyMapping[ -key]= gameKey;
    

                                    }
                                
                             else 
                        if(key > 0)
                        
                                    {
                                    
                        if(this->platformToGameKeyMapping[key] == this->gameKeyFactory.NONE)
                        
                                    {
                                    this->platformToGameKeyMapping[key]= gameKey;
    

                                    }
                                

                                    }
                                
                        else {
                            PreLogUtil::putOE(StringMaker().append(gameKey.toString()).append(CommonSeps::getInstance().COLON_SEP).appendint(key).toString(), this, this->commonStrings.INIT, Exception());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: int32_t getSmallestCanvasGameKeyCode(Canvas canvas){

    int32_t nextKey = 0;;
    

    int32_t smallestKey = 0;;
    




                        for (
    int32_t index = this->mappedGameKeys.size();--index >= 0; )
        {
nextKey= canvas.getKeyCode(this->mappedGameKeys[index]!.getId());
    

                        if(nextKey < smallestKey)
                        
                                    {
                                    smallestKey= nextKey;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return smallestKey;
    
}


    public: void init(Canvas canvas){

        try {
            
    std::vector<GameKey> negativePlatformToGameKeyMapping = {};;
    

    int32_t smallestKey = this->getSmallestCanvasGameKeyCode(canvas);;
    

                        if(smallestKey < 0)
                        
                                    {
                                    smallestKey--;
    

                        if(smallestKey <  -256)
                        
                                    {
                                    smallestKey=  -256;
    

                                    }
                                
negativePlatformToGameKeyMapping= new Array( -smallestKey);
    




                        for (
    int32_t index = negativePlatformToGameKeyMapping.size();--index >= 0; )
        {
negativePlatformToGameKeyMapping[index]= this->gameKeyFactory.NONE;
    
}

this->negativePlatformToGameKeyMapping= negativePlatformToGameKeyMapping;
    

                                    }
                                




                        for (
    int32_t index = this->mappedGameKeys.size();--index >= 0; )
        {
this->initGameKey(canvas, this->mappedGameKeys[index]!);
    
}


                //: 
} catch(t) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.INIT, t);
    
}

}


    public: GameKey getInstanceForCanvas(Canvas canvas, int32_t id){

                        if(id >= 0 && id < this->platformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformToGameKeyMapping[id]!;
    

                                    }
                                
                             else 
                        if(id < 0 &&  -id < this->negativePlatformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->negativePlatformToGameKeyMapping[ -id]!;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKeyFactory.NONE;
    

                        }
                            
}


    public: GameKey getInstance(int32_t id){

                        if(id >= 0 && id < this->platformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformToGameKeyMapping[id]!;
    

                                    }
                                
                             else 
                        if(id < 0 &&  -id < this->negativePlatformToGameKeyMapping.size())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->negativePlatformToGameKeyMapping[ -id]!;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKeyFactory.NONE;
    

                        }
                            
}


};

            

