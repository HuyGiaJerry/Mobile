import React from 'react';
import { View, Text, StyleSheet } from 'react-native';
import Icon from 'react-native-vector-icons/FontAwesome';

const RowNotification = ({ icon, title, des, date }) => {
    return (
        <View style={styles.rowNoti}>
            <View style={styles.icon}>
                <Icon name={icon} size={30} color="#003399" />
            </View>
            <View>
                <Text style={styles.title}>{title}</Text>
                <Text style={styles.des}>{des}</Text>
                <Text style={styles.date}>{date}</Text>
            </View>
        </View>
    );
};

const styles = StyleSheet.create({
    rowNoti: {
        display: 'flex',
        flexDirection: 'row',
        flexWrap: 'wrap',
        width: '100%',
        height: '100',
        backgroundColor: '#CCFFFF',
        marginBottom: 5, 
        padding: 10, 
        borderRadius: 8, 
        gap: 15,
    },
    icon: {
        height: '100%',
        marginTop: '5%',
        marginLeft: '4%',
    },
    title: {
        fontSize: 17,
        marginTop: '5%',
        marginLeft: '4%',
        fontWeight: '600',
    },
    des: {
        marginLeft: '4%',
        marginTop: '1%',
    },
    date: {
        marginLeft: '4%',
        marginTop: '3%',
        color: 'gray',
    },
});

export default RowNotification;
