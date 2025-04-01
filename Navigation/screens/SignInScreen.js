import React, { useState } from 'react'
import {View,Text,StyleSheet,TouchableOpacity,TextInput} from 'react-native'

const SignInScreen =  ({navigation}) => {

    const [phone,setPhone] = useState('')
    const [valid,setValid] = useState(false)
    const [errMsg,setErrMsg] = useState('')

    const validatePhone = (text) => {
        setPhone(text)
        if(/^0\d{9}$/.test(text))
        {
            setValid(true)
            setErrMsg('OK')
        }
        else 
        {
            setValid(false)
            setErrMsg('NOT OK')
        }
    }

    return (
        <View style={styles.container}>
        
            <TextInput
                editable
                multiline
                numberOfLines={4}
                maxLength={15}
                placeholder='Nhập số điện thoại'
                style={styles.textInput}
                value={phone}
                onChangeText={validatePhone}
            />
            <Text style={{color:'green'}}>Số điện thoại đã nhập : {phone}</Text>
            <Text style={{color: valid ? 'green' : 'red'}}>{errMsg}</Text>
            <TouchableOpacity 
            style={styles.btn} 
            onPress={()=> valid ? navigation.navigate('Home',{phone}) : alert('Số điện thoại không hợp lệ')}>
                <Text style={{color: 'white',fontSize:15, fontWeight: 900}}>Login</Text>
            </TouchableOpacity>
        </View>
    )
} 
const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        alignItems: 'center',
        justifyContent: 'center',
      },

    textInput: {
        marginTop: 10,
        padding: 5,
        marginBottom: 10,
        borderWidth: 1,
        width: '80%',
    },
    btn: {
        marginTop: 100,
        backgroundColor: '#f4f4',
        padding: 5,
        width: '80%',
        height: 30,
        display: 'flex',
        flexDirection: 'row',
        justifyContent: 'center',
      },
})

export default SignInScreen