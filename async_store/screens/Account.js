import React,{useEffect, useState} from 'react';
import { View, Text, Image, TouchableOpacity, StyleSheet } from 'react-native';
import AsyncStorage from '@react-native-async-storage/async-storage';
export default function Account({ navigation }) {
    const [email, setEmail] = useState('');

    useEffect(() => {
        const getEmail = async () => {
            try {
                const value = await AsyncStorage.getItem('userEmail');
                if (value !== null) {
                    setEmail(value);
                }
            } catch (error) {
                console.log(error);
            }
        };
        getEmail();
    },[])
    return (
        <View style={styles.container}>
            <View style={styles.header} />
            <Image style={styles.avatar} source={require('../assets/account_avatar.jpg')} />
            <View style={styles.body}>
                <Text style={styles.name}>{email || 'Loading...'}</Text>
                <Text style={styles.info}>Mobile developer</Text>
                <Text style={styles.description}>
                    Nguyen Gia Huy : 22810310268 : D17CNPM4
                </Text>
                <TouchableOpacity style={styles.buttonContainer} onPress={() => navigation.navigate('SignIn')}>
                    <Text style={styles.buttonText}>Sign Out</Text>
                </TouchableOpacity>
            </View>
        </View>
    );
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
    },
    header: {
        backgroundColor: '#00BFFF',
        height: 200,
    },
    avatar: {
        width: 130,
        height: 130,
        borderRadius: 65,
        borderWidth: 4,
        borderColor: '#fff',
        alignSelf: 'center',
        position: 'absolute',
        marginTop: 130,
    },
    body: {
        marginTop: 40,
        alignItems: 'center',
        padding: 16,
    },
    name: {
        fontSize: 28,
        fontWeight: '600',
    },
    info: {
        fontSize: 16,
        color: '#00BFFF',
        marginTop: 10,
    },
    description: {
        fontSize: 16,
        color: '#696969',
        textAlign: 'center',
        marginTop: 10,
    },
    buttonContainer: {
        marginTop: 20,
        height: 45,
        width: 200,
        borderRadius: 10,
        backgroundColor: '#f57c00',
        justifyContent: 'center',
        alignItems: 'center',
    },
    buttonText: {
        color: '#fff',
        fontSize: 18,
    },
});