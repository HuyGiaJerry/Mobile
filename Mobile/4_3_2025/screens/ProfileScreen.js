import React , {useContext}from 'react'
import { StyleSheet, Text, View ,TouchableOpacity} from 'react-native'
import { UserContext } from '../contexts/UserContext';
const ProfileScreen = ({navigation}) => {
    const { user,setUser } = useContext(UserContext);
    const handleSignOut = () => {
        setUser(null);
        navigation.replace('SignIn');
    };


    return (
        <View style={styles.container}>
            <Text>User: {user?.email}</Text>
            <TouchableOpacity
            style={styles.btnLogin}
            onPress={handleSignOut}
            >
                <Text style={{color:'white',textAlign:'center'}}>Sign Out</Text>
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
        marginTop: 30,
    },
    btnLogin: {
        marginTop: 40,
        width: '40%',
        padding: 5,
        backgroundColor: 'orange',
    }
})

export default ProfileScreen