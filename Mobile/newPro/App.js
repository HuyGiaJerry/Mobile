import { StyleSheet, Text, View, TouchableOpacity,TextInput} from 'react-native';
import React,{useState} from 'react';

export default function App() {
  const [phone,setPhone] = useState('')
  const [valid,setValid] = useState(false)
  const [error,setError] = useState('') 
  
const validatePhone = (text) => {
  {/* Set ra số điện thoại*/}
  setPhone(text)
  if (/^0\d{9}$/.test(text)) {
    setValid(true);
    setError('OK');
  } else {
    setValid(false);
    setError('Not OK');
  }
};

const handleLogin = () => {
  if(!valid)
    alert('Số điện thoại không hợp lệ')
  else 
    alert('Đăng nhập thành công')
};

  return (
    <View style={styles.container}>
      <Text style={{fontSize: 25,fontWeight: 600,marginBottom: 100}}>Đăng Nhập</Text>
      <Text>Nhập số điện thoại :</Text>
      <TextInput
          editable
          multiline
          numberOfLines={4}
          maxLength={40}
          placeholder='Nhập số điện thoại'
          style={styles.textInput}
          value={phone}
          onChangeText={validatePhone}
        />
      <Text style={{color:'green'}}>Số điện thoại đã nhập : {phone}</Text>
      <Text style={{color: valid ? 'green' : 'red'}}>{error}</Text>
      <TouchableOpacity style={styles.btn} onPress={handleLogin}>
        <Text style={{color: 'white',fontSize:15, fontWeight: 900}}>Login</Text>
      </TouchableOpacity>
    </View>
  );
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
    marginTop: 200,
    backgroundColor: '#f4f4',
    padding: 5,
    width: '80%',
    height: 30,
    display: 'flex',
    flexDirection: 'row',
    justifyContent: 'center',
  },
});
