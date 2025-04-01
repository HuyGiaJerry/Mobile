import React from 'react' 
import {TouchableOpacity,StyleSheet,Text} from 'react-native'

const Btn = ({text,backgroundColor,onPress}) => {
    return (
        <TouchableOpacity style={[styles.button,{backgroundColor}]} onPress={onPress}>
            <Text style={styles.txt}>{text}</Text>
        </TouchableOpacity>
    )
}
const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        alignItems: 'center',
        justifyContent: 'center',
      },
      button :{
        width: '80%',
        height: 40,
        borderRadius: 5,
        display: 'flex',
        justifyContent: 'center',
        alignItems: 'center',
      },
      txt :{
        color: 'white',
        textTransform: 'uppercase',
      },
}) 

export default Btn
